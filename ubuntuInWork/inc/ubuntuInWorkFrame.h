#ifndef _UBUNTUINWORKFRAME_H_
#define _UBUNTUINWORKFRAME_H_

#include <FBase.h>
#include <FUi.h>

class ubuntuInWorkFrame
	: public Tizen::Ui::Controls::Frame
{
public:
	ubuntuInWorkFrame(void);
	virtual ~ubuntuInWorkFrame(void);

public:
	virtual result OnInitializing(void);
	virtual result OnTerminating(void);
};

#endif	//_UBUNTUINWORKFRAME_H_
