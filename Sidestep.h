//extern typedef players[6];
extern char boardIndex[6][9][25];
int Sidestep(char PlayerColour)
{
  int a=0, temp, count, counts, row, column;//Need to do chack for player colour and what counter they're moving
  char b[1];

    printf("Which row would you like to move to? Type the option number\n");
    printf("Option 1  %d\n", (row-1));
    printf("Option 2  %d\n", (row+1));
    scanf("%d", temp);
    if(temp == 1)
    {
      for(counts=0;counts<20;counts++)
      {
        boardIndex[row][column][counts] = boardIndex[row][column][counts+1];
      }
      if(boardIndex[row-1][column][0]== ' ')
      {
       boardIndex[row-1][column][0] = PlayerColour;
      }
      else{
        b[0] = PlayerColour;
        for(counts=1;counts<20;counts++)
        {
          b[counts] = boardIndex[row-1][column][counts-1];
          boardIndex[row-1][column][counts-1] = b[counts-1];
        }
      }
    }
    if(temp == 2)
    {
      for(counts=0;counts<20;counts++)
      {
        boardIndex[row][column][counts] = boardIndex[row][column][counts+1];
      }
      if(boardIndex[row+1][column][0]== ' ')
      {
       boardIndex[row+1][column][0] = PlayerColour;
      }
      else{
        b[0] = PlayerColour;
        for(counts=1;counts<20;counts++)
        {
          b[counts] = boardIndex[row+1][column][counts-1];
          boardIndex[row+1][column][counts-1] = b[counts-1];
        }
      }
    }
  }