# Game Show
A program that simulates a game show that prompts the user to choose between 3 doors that may contain $1,000,000 in cash.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git https://github.com/cramaechi/game-show.git
   ```
    or [download as ZIP](https://github.com/cramaechi/game-show/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd game-show
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./game_show
```

Sample Output:
```
Please randomly select one of the 3 doors: 3                                                                          
                                                                                                                      
Thank you. Door # 3 contains dishwashing detergent!                                                                   
                                                                                                                      
Would you like to stick with your choice or switch? (stick/switch) switch                                             
                                                                                                                      
Please randomly select one of the 3 doors: 2                                                                          
                                                                                                                      
Ohhhhhhhhhhh, sorry you lost!!!


Please randomly select one of the 3 doors: 2                                                                          
                                                                                                                      
Thank you. Door # 1 contains dishwashing detergent!                                                                   
                                                                                                                      
Would you like to stick with your choice or switch? (stick/switch) stick                                              
                                                                                                                      
Congratulations!!!, you win $1,000,000 in cash!!!


Please randomly select one of the 3 doors: 1                                                                          
                                                                                                                      
Thank you. Door # 2 contains dishwashing detergent!                                                                   
                                                                                                                      
Would you like to stick with your choice or switch? (stick/switch) stick                                              
                                                                                                                      
Ohhhhhhhhhhh, sorry you lost!!!  
```
