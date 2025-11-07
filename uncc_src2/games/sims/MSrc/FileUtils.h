// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_FILEUTILS_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_FILEUTILS_H

void SplitPath(StringBuffer &fullPath, StringBuffer &directory, StringBuffer &fileName, StringBuffer &extension);
void ExtractDirectory(StringBuffer &fullPath, StringBuffer &directory);
void ExtractFileName(StringBuffer &path, StringBuffer &name);
void ExtractExtension(StringBuffer &path, StringBuffer &nameOnly, StringBuffer &ext);
ErrType WriteHandleToFile(HandleNode *hand, char *filename);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_FILEUTILS_H
