// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CAMERA_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CAMERA_H

enum PanelEvent {
	LANG_EVENT = 0,
	UNLOCK_OBJECT_EVENT = 1,
	NEVENTS = 2
};

typedef TNodeList<ISimInstance *> ISimInstanceList;
typedef TNodeList<CursorFloorTile *> CursorFloorTilePtrList;
extern u32 ESimsCam::m_modeDef;
extern float ESimsCam::m_rotSpeedDef;
extern float ESimsCam::m_minHeight;
extern float ESimsCam::m_maxZoom;
extern float ESimsCam::m_minZoom;
extern float ESimsCam::m_minTilt;
extern float ESimsCam::m_maxTilt;
extern float ESimsCam::m_transSpeedDef;
extern float ESimsCam::m_transSpeedMin;
extern EVec3 ESimsCam::m_vEyeDef;
extern EVec3 ESimsCam::m_vTargetDef;
extern EVec3 ESimsCam::m_vUpDef;
extern EVec3 ESimsCam::m_minZoomPt;
extern EVec3 ESimsCam::m_ctrlPt1;
extern EVec3 ESimsCam::m_ctrlPt2;
extern EVec3 ESimsCam::m_maxZoomPt;
extern EIBezierSpline ESimsCam::m_spline;
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
extern __vtbl_ptr_type ESimsCam virtual table[6];
extern float factor;
extern __vtbl_ptr_type Panelstateman virtual table[5];

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void ESimsCam::~ESimsCam(int __in_chrg);
void Panelstateman::~Panelstateman(int __in_chrg);
void global constructors keyed to ESimsCam::m_modeDef();
void global destructors keyed to ESimsCam::m_modeDef();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CAMERA_H
