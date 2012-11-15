#ifndef _AIRTIZEN_H_
#define _AIRTIZEN_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FUi.h>

/**
 * [AirTizen] UiApp must inherit from UiApp class
 * which provides basic features necessary to define an UiApp.
 */
class AirTizenApp
	: public Osp::App::UiApp
	, public Osp::System::IScreenEventListener
{
public:
	/**
	 * [Test] UiApp must have a factory method that creates an instance of itself.
	 */
	static Osp::App::UiApp* CreateInstance(void);

public:
	AirTizenApp(void);
	virtual ~AirTizenApp(void);

public:
	// Called when the UiApp is initializing.
	bool OnAppInitializing(Osp::App::AppRegistry& appRegistry);

	// Called when the UiApp initializing is finished. 
	bool OnAppInitialized(void); 

	// Called when the UiApp is requested to terminate. 
	bool OnAppWillTerminate(void); 

	// Called when the UiApp is terminating.
	bool OnAppTerminating(Osp::App::AppRegistry& appRegistry, bool forcedTermination = false);

	// Called when the UiApp's frame moves to the top of the screen.
	void OnForeground(void);

	// Called when this UiApp's frame is moved from top of the screen to the background.
	void OnBackground(void);

	// Called when the system memory is not sufficient to run the UiApp any further.
	void OnLowMemory(void);

	// Called when the battery level changes.
	void OnBatteryLevelChanged(Osp::System::BatteryLevel batteryLevel);

	// Called when the screen turns on.
	void OnScreenOn(void);

	// Called when the screen turns off.
	void OnScreenOff(void);
};

#endif // _AIRTIZEN_H_
