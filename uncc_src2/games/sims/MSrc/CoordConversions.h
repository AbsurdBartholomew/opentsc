// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_COORDCONVERSIONS_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_COORDCONVERSIONS_H

typedef float VecNum;

enum RotationAxis {
	kXAxis = 0,
	kYAxis = 1,
	kZAxis = 2
};

VecNum AltToIso(VecNum &inAlt);
VecNum IsoToAlt(VecNum &inIso);
VecNum AltToWorld(VecNum &inAlt);
VecNum WorldToAlt(VecNum &inWorldZ);
EVec3 IsoToWorld(VecNum &tileX, VecNum &tileY, VecNum &inAlt);
EVec3 IsoFracsToWorld(VecNum &x, VecNum &y, VecNum &inAlt);
EVec3 IsoToWorld(FTilePt &inLoc, VecNum &inAlt);
FTilePt WorldToIso(EVec3 &inLoc);
EMat4 ObjectRotationTf(int inDirection);
EMat4 RotationTf(RotationAxis inAxis, VecNum &inAngle);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_COORDCONVERSIONS_H
