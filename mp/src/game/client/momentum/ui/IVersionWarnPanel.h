#pragma once

#include "vgui/IVGui.h"

class VersionWarnPanel
{
  public:
    virtual void Create(vgui::VPANEL parent) = 0;
    virtual void Destroy(void) = 0;
    virtual void Activate(void) = 0;
    virtual void Close() = 0;
};

extern VersionWarnPanel *versionwarnpanel;