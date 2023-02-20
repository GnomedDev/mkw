#pragma once

#include <rk_types.h>

#include <decomp.h>

#ifdef __cplusplus
extern "C" {
#endif

// PAL: 0x80634c90..0x80634cc8
UNKNOWN_FUNCTION(SectionManager_initStaticInstance);
// PAL: 0x80634cc8..0x80634d40
UNKNOWN_FUNCTION(SectionManager_destroyStaticInstance);
// PAL: 0x80634d40..0x80634dc4
UNKNOWN_FUNCTION(SectionManager_construct);
// PAL: 0x80634dc4..0x80634e44
UNKNOWN_FUNCTION(SectionManager_destroy);
// PAL: 0x80634e44..0x80634fa0
UNKNOWN_FUNCTION(SectionManager_init);
// PAL: 0x80634fa0..0x80634fbc
UNKNOWN_FUNCTION(unk_80634fa0);
// PAL: 0x80634fbc..0x80635080
UNKNOWN_FUNCTION(SectionManager_changeSection);
// PAL: 0x80635080..0x8063519c
UNKNOWN_FUNCTION(unk_80635080);
// PAL: 0x8063519c..0x806354b8
UNKNOWN_FUNCTION(unk_8063519c);
// PAL: 0x806354b8..0x806354c0
UNKNOWN_FUNCTION(unk_806354b8);
// PAL: 0x806354c0..0x8063550c
UNKNOWN_FUNCTION(unk_806354c0);
// PAL: 0x8063550c..0x8063583c
UNKNOWN_FUNCTION(unk_8063550c);
// PAL: 0x8063583c..0x80635890
UNKNOWN_FUNCTION(unk_8063583c);
// PAL: 0x80635890..0x80635a2c
UNKNOWN_FUNCTION(unk_80635890);
// PAL: 0x80635a2c..0x80635a34
UNKNOWN_FUNCTION(unk_80635a2c);
// PAL: 0x80635a34..0x80635a3c
UNKNOWN_FUNCTION(unk_80635a34);
// PAL: 0x80635a3c..0x80635ac8
UNKNOWN_FUNCTION(SectionManager_setNextSection);
// PAL: 0x80635ac8..0x80635b2c
UNKNOWN_FUNCTION(SectionManager_startChangeSection);
// PAL: 0x80635b2c..0x80635b70
UNKNOWN_FUNCTION(SectionManager_startReinit);
// PAL: 0x80635b70..0x80635c0c
UNKNOWN_FUNCTION(unk_80635b70);
// PAL: 0x80635c0c..0x80635c74
UNKNOWN_FUNCTION(unk_80635c0c);
// PAL: 0x80635c74..0x80635cdc
UNKNOWN_FUNCTION(unk_80635c74);
// PAL: 0x80635cdc..0x80635ce4
UNKNOWN_FUNCTION(SectionManager_getResourceName);
// PAL: 0x80635ce4..0x80635cec
UNKNOWN_FUNCTION(unk_80635ce4);

#ifdef __cplusplus
}
#endif

class SectionManager {
public:
    void setNextSection(s32 sectionId, s32 animationDirection);
    void startChangeSection(s32 delay, u8 color);

    static SectionManager *Instance() { return s_instance; }

private:
    static SectionManager *s_instance;
};
