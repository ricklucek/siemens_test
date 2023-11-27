# Context
Information about pets is kept in two separate tables:

TABLE dogs
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL

TABLE cats
id INTEGER NOT NULL PRIMARY KEY,
name VARCHAR(50) NOT NULL

Write an SQL query that select all distinct pet names.

## How to run it?

tested in given sql test website https://sqliteonline.com


### coments
UNION instruction remove duplicate names from cats and dogs table



