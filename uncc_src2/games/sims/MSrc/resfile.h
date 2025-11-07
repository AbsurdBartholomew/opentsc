// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_RESFILE_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_RESFILE_H

enum OpenFlags {
	kJustOpen = 0,
	kCreate = 1,
	kOverwrite = 2,
	kReset = 3
};

extern iResFile *iResFile::sFileList;
extern __vtbl_ptr_type iResFile virtual table[38];

void iResFile::~iResFile(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_RESFILE_H
