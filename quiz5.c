/*
This function allocates memory for a player_t pointer variable.
Inputs:
  player_p_p - memory location of a player_t pointer variable
  nplayers - number of players that memory needs to be allocated for
Return:
  0 - success
  1 - failed to allocate memory
Post:
  After the function has been called, *player_p_p will point to freshly
  allocated memory if malloc was successful. Otherwise *player_p_p will point to
  NULL.
*/
int allocate_memory(player_t** player_p_p, long int nplayers)
{
*player_p_p = NULL; 
*player_p_p = (player_t*)malloc(sizeof(player_t)*nplayers);

if(*player_p_p == NULL)
{
printf("mem error");
return 1;
}
return 0;
}

/*
This function initialises each field of one playet_t struct.
Inputs:
  player_p - memory location of the player_t variable. player_p must have been
    allocated memory using allocate_memory before calling this function.
  nplayers - number of players that memory needs to be allocated for
Post:
  After the function has been called, the age field of *player_p will be the
  input age, and wickets field of *player_p will be the input wickets.
*/
void init_player(player_t* player_p, int age, int wickets)
{
player_p -> age = age;
player_p -> wickets = wickets;
}

/*
This function prints a player_t variable in the following format:
player - age:AA wickets:BBB
Inputs:
  player_p - variable to be printed
*/
void print_player(player_t player)
{
printf("player - age:%02d wickets:%03d\n", player.age, player.wickets);
}

/*
This function compares two players. If *player1_p is older than the *player2_p,
swap them. In all other cases, do not swap them.
Inputs:
  player1_p - memory location of the first player
  player2_p - memory location of the second player
Post:
  After the function has been called, the age of *player1_p is always less than
  or equal to *player2_p age.
*/
void order_two_players(player_t* player1_p, player_t* player2_p)
{
int temp;
if(player1_p -> age > player2_p -> age)
{
temp = player1_p -> age;
player1_p -> age = player2_p -> age;
player2_p -> age = temp;
temp = player1_p -> wickets;
player1_p -> wickets = player2_p -> wickets;
player2_p -> wickets = temp;
}
}

/*
Sort an array of players in non-decreasing order of the age by implementing the 
following algorithm:
1. Compare two adjacent players, if the first player is older than the second, 
   swap the first and second players.
2. Keep comparing the next two adjacent players in the array, until the end of 
   the array is reached.
3. Repeat the above steps for players_len times.
This simple algorithm is also known as bubble sort.
Inputs:
  players - player_t array (memory location of 0th element in the array)
  players_len - number of players in the array
*/
void order_all_players(player_t* players, int players_len)
{
int i, j;
for(i = 0; i < players_len -1; i++)
{
for(j = 0; j < players_len -1; j++)
{
order_two_players(&players[j], &players[j+1]);
}
}
}

