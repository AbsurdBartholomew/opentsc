// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_INSTANCE_PLATFORM_E_PLATFORMSCRIPTFUNS_H
#define C__EOR_SRC2_ENGINE_INSTANCE_PLATFORM_E_PLATFORMSCRIPTFUNS_H

bool IsPlatform(EInstance *pInstance);
void sfnMoveTo(EScriptContext *pContext);
void sfnMoveToRelative(EScriptContext *pContext);
void sfnRotateTo(EScriptContext *pContext);
void sfnRotateToRelative(EScriptContext *pContext);
void sfnScaleTo(EScriptContext *pContext);
void sfnScaleToRelative(EScriptContext *pContext);
void sfnStartAnimation(EScriptContext *pContext);
void sfnStopAnimation(EScriptContext *pContext);
void sfnChangeAnimationSpeed(EScriptContext *pContext);
void sfnChangeAnimationIntensity(EScriptContext *pContext);
void sfnRunScript(EScriptContext *pContext);
void sfnDestroy(EScriptContext *pContext);
void sfnSuspend(EScriptContext *pContext);
void sfnUnsuspend(EScriptContext *pContext);
void sfnVisibility(EScriptContext *pContext);
void sfnCollision(EScriptContext *pContext);
void sfnChangeModel(EScriptContext *pContext);
void sfnCheckId(EScriptContext *pContext);
void sfnAddInstance(EScriptContext *pContext);
void sfnGetPlatformPos(EScriptContext *pContext);
void sfnGetPlatformRot(EScriptContext *pContext);
void sfnGetPlatformScale(EScriptContext *pContext);
void sfnIsPlatformSuspended(EScriptContext *pContext);
void sfnIsPlatformVisible(EScriptContext *pContext);
void sfnIsPlatformCollidable(EScriptContext *pContext);
void sfnIsPlatformMoving(EScriptContext *pContext);
void sfnIsPlatformRotating(EScriptContext *pContext);
void sfnIsPlatformScaling(EScriptContext *pContext);
void sfnIsPlatformAnimPlaying(EScriptContext *pContext);
void sfnGetLastAnim(EScriptContext *pContext);
void sfnResetPlatform(EScriptContext *pContext);
void sfnSetPlatformTime(EScriptContext *pContext);
void sfnGetPlatformTime(EScriptContext *pContext);
void sfnSetSplineParams(EScriptContext *pContext);
void sfnSetSpline(EScriptContext *pContext);
void sfnSetSplineSpeed(EScriptContext *pContext);
void sfnSetSplineBlend(EScriptContext *pContext);
void sfnSetSplineDirection(EScriptContext *pContext);
void sfnSetSplineLoop(EScriptContext *pContext);
void sfnSetSplineNormal(EScriptContext *pContext);
void sfnSetSplineTeleport(EScriptContext *pContext);
void sfnPlatGetSpline(EScriptContext *pContext);
void sfnGetSplineDirection(EScriptContext *pContext);
void sfnGetSplineSpeed(EScriptContext *pContext);
void sfnGetSplineBlend(EScriptContext *pContext);
void sfnGetSplineTime(EScriptContext *pContext);
void sfnIsSplineEnd(EScriptContext *pContext);
void sfnIsSplineEndTravel(EScriptContext *pContext);

#endif // C__EOR_SRC2_ENGINE_INSTANCE_PLATFORM_E_PLATFORMSCRIPTFUNS_H
