#include <stdio.h>
#include "defs.h"

int main () {

  AllInit();

  U64 playBitBoard = 0ULL;

  playBitBoard |= (1ULL << SQ64(H8));
  playBitBoard |= (1ULL << SQ64(A3));
  playBitBoard |= (1ULL << SQ64(D4));
  while (playBitBoard) { 

      U64 sq64 = POP(&playBitBoard);
      printf("popped: %lld\n", sq64);
      PrintBitBoard(playBitBoard);
  }

  return 0;
}
