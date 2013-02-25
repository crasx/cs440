Classes and assignments
======

Path
------
*Simple struct*
#### Members
- Room from*
- Room to*
- bool locked

Room
------
*Simple struct*
#### Members
- Name
- Description
- Paths
  - array of Path[16] // one for each direction

ENV_DIR
------
*Simple struct*
- constant directions
 
#### Members 
- HERE = 0

- N = 1
- NW = 2
- NE = 3
- NNW = 4
- NNE = 5

- E = 6
- ENE = 7
- ESE = 8

- S = 9
- SE = 10 
- SW = 11
- SSW = 12
- SSE = 13

- W = 14
- WNW = 15
- WSW = 16

- U = 17
- U = 18

Environment
------
*Matthew would like to work on this*

- Parsing of GDF files. See [GDF specification](http://www.cs.uic.edu/~i440/GFD_FileFormat.pdf)
  - Regular expressions may be helpuful
- Map of environment
  - Each room is an object, holds a list of pointers to other rooms, representation of paths (See room class)
  - Rooms held in array for easy indexing, maybe a map (datatype, not to be confused with environment map)
- Action methods
  - Go, Look
  - Return output message
  - set flag from input if error
- list of error messsages to output
  - This door is locked
  - That is a wall
   
#### Members
- holds pointer to current location 

#### Methods
- Look 
 - input:  ENV_DIR direction, bool error&
 - return: char *message
- Go
  - input:  ENV_DIR direction, bool error&
  - return: char *message
- parseCommands
 - input: a string that is the command the use entered
 - return: nothing
 - function: parses the command the user types and calls the appropriate methods
User
------
- must be able to parse user input and interact with environment?


