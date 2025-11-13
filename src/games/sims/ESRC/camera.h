/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/types.h"
#include "common/math/e_vec3.h"
#include "common/math/e_mat4.h"

enum PanelEvent
{
    LANG_EVENT = 0,
    UNLOCK_OBJECT_EVENT = 1,
    NEVENTS = 2
};

struct ESimsCam// : Panelstateman
{
protected:
    int m_playerId;
    bool m_bCanUpdate;
    bool m_bmoved;
    bool m_bGotBut;
    //EPortalWindow m_win;
    //ESimsCursor *m_pCursor;
    u32 m_mode;
    u32 m_lastMode;
    u32 m_but;
    s32 m_LockedPad;
    EMat4 m_mFirstPerson;
    EVec3 m_vEye;
    EVec3 m_vTarget;
    EVec3 m_vUp;
    float m_transSpeed;
    float m_rotSpeed;
    float m_zoom;
    float m_DegRotAng;
    float m_DegTiltAng;
    static EVec3 m_minZoomPt;
    static EVec3 m_ctrlPt1;
    static EVec3 m_ctrlPt2;
    static EVec3 m_maxZoomPt;
    //static EIBezierSpline m_spline;

public:
    static u32 m_modeDef;
    static float m_rotSpeedDef;
    static float m_transSpeedDef;
    static float m_maxZoom;
    static float m_minZoom;
    static float m_minHeight;
    static float m_maxTilt;
    static float m_minTilt;
    static float m_maxHeight;
    static float m_transSpeedMin;
    static EVec3 m_vEyeDef;
    static EVec3 m_vTargetDef;
    static EVec3 m_vUpDef;

    ESimsCam(int player);

private:
public:
    ESimsCam();
    void Init();
    void Reset();
    /* vtable[4] */ virtual void Update();
    ///* vtable[2] */ virtual void SetState(/* a1 5 */ Panelstate newstate);
    ///* vtable[3] */ virtual void SetEvent(/* a1 5 */ PanelEvent event, /* a2 6 */ u32 data);
    void GetPos(/* a1 5 */ EVec3 &vEyeOut, /* a2 6 */ EVec3 &vTargetOut, /* a3 7 */ EVec3 &vUpOut);
    EVec3 &GetEye();
    EVec3 &GetTarget();
    EVec3 &GetUp();
    void SetPos(/* a1 5 */ EVec3 &vEye, /* a2 6 */ EVec3 &vTarget, /* a3 7 */ EVec3 &vUp);
    void IncPos(/* a1 5 */ EVec2 vinc);
    //void SetWinPos(/* t0 8 */ E3DWindow &win);
    //void SetPos2Player(/* a1 5 */ E3DWindow &win);
    void SetTarget(/* a1 5 */ EVec3 &vTarget);
    float GetTransSpeed();
    void SetTransSpeed(/* f12 50 */ float transSpeed);
    float GetRotSpeed();
    void SetRotSpeed(/* f12 50 */ float rotSpeed);
    void ResetPos();
    void GetCursPos(/* a1 5 */ EVec3 &vin);
    float GetZoom();
    float GetTilt();
    //E3DWindow *GetWin();
    void UpdateWin();
    void CusorMoved(/* a1 5 */ int which, /* s1 17 */ EVec2 &vStick);
    //void AttachCursor(/* a1 5 */ int which, /* a2 6 */ ESimsCursor *pCurs);
    bool GetbMoved();
    void SetUpdateable(/* a1 5 */ bool on);
    void CenterOnSelectedSim();
    float GetRotAng();
    u32 GetMode();
    void ToggleFirstPerson();
    float GetCurZoomRatio();
    int GetPlayerId();
    void ForceFullScreen();
    void SetFirstPerson(/* a1 5 */ EMat4 &in);

protected:
    void ForceCusor();
    bool HandleRotation();
    bool HandleTilt();
    bool HandleZoom();
    //ESZoomResult DoZoom();
    bool CursorOnScreen();
    bool HandleFirsPerson();
    void UpdateCamPos();
};

//typedef TNodeList<ISimInstance *> ISimInstanceList;
//typedef TNodeList<CursorFloorTile *> CursorFloorTilePtrList;
extern float _fov;
extern float _nearPlane;
extern float _farPlane;
extern float _clampRad;
extern float _cam_tilt_min;
extern float _cam_tilt_max;
extern float _camera_fp_zoff;
extern float __zoom_last;
extern float _esimcam_cos45;
extern EVec2 _vP1ScreenPosMin;
extern EVec2 _vP1ScreenPosMax;
extern EVec2 _vP2ScreenPosMin;
extern EVec2 _vP2ScreenPosMax;
extern int _shiftTest;
extern float factor;