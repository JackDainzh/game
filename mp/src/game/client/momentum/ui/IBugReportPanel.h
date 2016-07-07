#pragma once

#include "vgui/IVGui.h"

class IBugReportPanel
{
public:
    virtual void Create(vgui::VPANEL parent) = 0;
    virtual void Destroy(void) = 0;
    virtual void Activate(void) = 0;
    virtual void Close() = 0;
};

extern IBugReportPanel *bug_report;