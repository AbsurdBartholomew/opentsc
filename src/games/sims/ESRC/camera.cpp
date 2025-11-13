/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "camera.h"

u32 ESimsCam::m_modeDef;
float ESimsCam::m_rotSpeedDef;
float ESimsCam::m_minHeight;
float ESimsCam::m_maxZoom;
float ESimsCam::m_minZoom;
float ESimsCam::m_minTilt;
float ESimsCam::m_maxTilt;
float ESimsCam::m_transSpeedDef;
float ESimsCam::m_transSpeedMin;
EVec3 ESimsCam::m_vEyeDef;
EVec3 ESimsCam::m_vTargetDef;
EVec3 ESimsCam::m_vUpDef;
EVec3 ESimsCam::m_minZoomPt;
EVec3 ESimsCam::m_ctrlPt1;
EVec3 ESimsCam::m_ctrlPt2;
EVec3 ESimsCam::m_maxZoomPt;
//EIBezierSpline ESimsCam::m_spline;
float _fov;
float _nearPlane;
float _farPlane;
float _clampRad;
float _cam_tilt_min;
float _cam_tilt_max;
float _camera_fp_zoff;
float __zoom_last;
float _esimcam_cos45;
EVec2 _vP1ScreenPosMin;
EVec2 _vP1ScreenPosMax;
EVec2 _vP2ScreenPosMin;
EVec2 _vP2ScreenPosMax;
int _shiftTest;
float factor;