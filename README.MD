# OpenTSC
A reimplementation of Edge of Reality's PlayStation 2 engine as well as The Sims games built upon it.

## Building
This project was tested using w64devkit. To build:
`make -f [game].mak [backend]`

where [game] is one of the following:
- Sims
- SimsBO
- Sims2
- Sims2Pets
- Sims2Castaway
- Sims3

and [backend] is one of the following:
- SDL2

This will output an executable inside of the `src/games/[game]/bin` directory.

## Supported Games
Right now, this project is only designed for The Sims for PlayStation 2. Support for other games is experimental.

## Dependencies
SDL2
