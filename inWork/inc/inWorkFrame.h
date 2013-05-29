#ifndef _INWORKFRAME_H_
#define _INWORKFRAME_H_

#include <FBase.h>
#include <FUi.h>

class inWorkFrame
	: public Tizen::Ui::Controls::Frame
{
public:
	inWorkFrame(void);
	virtual ~inWorkFrame(void);

public:
	virtual result OnInitializing(void);
	virtual result OnTerminating(void);
};

#endif	//_INWORKFRAME_H_
