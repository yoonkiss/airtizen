#ifndef _AIRTIZENFRAME_H_
#define _AIRTIZENFRAME_H_

#include <FBase.h>
#include <FUi.h>

class AirTizenFrame
	: public Osp::Ui::Controls::Frame
{
public:
	AirTizenFrame(void);
	virtual ~AirTizenFrame(void);

public:
	virtual result OnInitializing(void);
	virtual result OnTerminating(void);
};

#endif	//_AIRTIZENFRAME_H_
