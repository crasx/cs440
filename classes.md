Classes and assignments
======

Room
------
*Simple object*
#### Members
- Name
- Description
- Paths
  - array of pointers

Environment
------
*Matthew would like to work on this*

- Parsing of GDF files. See [GDF specification](http://www.cs.uic.edu/~i440/GFD_FileFormat.pdf)
  - Regular expressions may be helpuful
- Map of environment
  - Each room is an object, holds a list of pointers to other rooms, representation of paths (See room class)
  - Rooms held in array for easy indexing, maybe a map (datatype, not to be confused with environment map)
#### Members

#### Private methods
- Up, Down, Left, Right?
  
User
------
- must be able to parse user input
- holds pointer to current location 

