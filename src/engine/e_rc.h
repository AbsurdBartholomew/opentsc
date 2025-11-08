/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include "common/types.h"
#include "common/math/e_vec3.h"
#include "common/math/e_mat4.h"
#include "engine/e_dl.h"
#include "engine/e_window.h"

struct EGEVert {
	EVec4 vModel;
	int normal[4];
	EVec4 tc;
	unsigned int color[4];
	unsigned int weights[4];
};

class ERC
{
protected:
    EDL *m_pdl;
	int m_nEntriesLeftInSeg;
	//EDLEntry *m_pEntry;
	//RCMode m_mode;
	bool m_closed;
	bool m_anyCommands;
	int m_lastCommand;
	int m_lastMatrixPos;
	int m_firstMatrixPos;
	int m_dstBufferOffset;
	int m_nSegs;
public:
    void Send();
    virtual void TriStrip(int nVerts, s16 *xyzs, s16 *texcoords, u8 *colors, s8 *normals, u8 *weights);
    virtual void TriIndexed(int nTris, u8 *ids);
    virtual void Vertex(int nVerts, int pos, float *xyzs, float *texcoords, u8 *colors, s8 *normals, u8 *weights);
    virtual void TriFan(EGEVert *verts, int nVerts);
    virtual void TriList(EGEVert *verts, int nVerts);
    virtual void QuadList(EGEVert *verts, int nVerts);
    virtual void LineList(EGEVert *verts, int nVerts);
    virtual void LineStrip(EGEVert *verts, int nVerts);
    virtual void PointList(int nVerts, float *xyzs, float *texcoords, u8 *colors, s8 *normals, u8 *weights);
    virtual void SpriteList(int nVerts, float *xyzs, float *texcoords, u8 *colors, s8 *normals, u8 *weights);
    //virtual void ParticleList(int nParticles, EGEPackedParticle *pPcls);
    //virtual void ParticleListRot(int nParticles, EGEPackedParticle *pPcls);
    virtual void DisplayList(EDL *pDL);
    virtual void Goto(EDL *pDL);
    virtual void Viewport(EViewport *pVP);
    virtual void ClipRatio(float clipRatio);
    virtual void ClipRect(EFloatRect &rect);
    virtual void Scissor(EFloatRect *pScis);
    virtual void ModelMatrices(EMat4 *mModels, int pos, int count);
    virtual void ModelMatrix(EMat4 *pmModel);
    virtual void ModelMatrixId();
    virtual void ViewMatrix(EMat4 *pmView);
    virtual void ProjectionMatrix(EMat4 *pmProjection);
    virtual void WindowMatrix(EMat4 *pmWindow);
    virtual void EnvironmentMap(bool enable, bool calculateReflectionVector, int renderPass);
    //virtual void TextureMatrix(EMat4 *pmTexture, ETCTransformSource source, bool useLookAt, bool perspectiveDivide, int renderPass);
    //virtual void Texture(ETexture *pTexture, int renderPass);
    virtual void EnableGeometryModes(u32 modeFlags);
	virtual void DisableGeometryModes(u32 modeFlags);
	virtual void SetGeometryModes(u32 modeFlags);
	virtual void EnableRasterModes(u32 modeFlags, int renderPass);
	virtual void DisableRasterModes(u32 modeFlags, int renderPass);
	virtual void SetRasterModes(u32 modeFlags, int renderPass);
	virtual void SaveState();
	virtual void RestoreState();
	//virtual void Lights(ELights *pLights, int nDirectionalLights);
	//virtual void PointLight(EPointLight *pPointLight);
	//virtual void Material(EMaterial *pMaterial);
	//virtual void Callback(PFNRCCallback pfnCallback, u32 param32, u16 param16, u8 param8);
	virtual void Rect(EVec2 &vUpperLeft, EVec2 &vLowerRight, EVec2 &vUpperLeftTC, EVec2 &vLowerRightTC, EVec4 &vColor, float depth);
	virtual void RectList(int nRects, float *args, EVec4 &vColor, float depth);
	virtual void DirectRect(EVec2 &vPos, EVec2 &vScale, EVec4 &vColor, float depth);
	virtual void SendHardwareDisplayList(void *pDList, u16 size);
};