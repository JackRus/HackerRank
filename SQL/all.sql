/* 
Revising the Select Query I
-
Query all columns for all American cities in CITY with populations larger than 100000. The CountryCode for America is USA.
*/
SELECT * FROM city WHERE population > 100000 AND countrycode = "USA"


/* 
Revising the Select Query II
-
Query the names of all American cities in CITY with populations larger than 120000. The CountryCode for America is USA.
*/
SELECT name FROM city WHERE population > 120000 AND countrycode = "USA"


/* 
Select All
-
Query all columns (attributes) for every row in the CITY table.
*/
SELECT * FROM city


/* 
Select by ID
-
Query all columns for a city in CITY with the ID 1661.
*/
SELECT * FROM city WHERE id = 1661


/* 
Japanese Cities' Attributes
-
Query all attributes of every Japanese city in the CITY table. The COUNTRYCODE for Japan is JPN.
*/
SELECT * FROM city WHERE countrycode = "JPN"


/* 
Japanese Cities' Names
-
Query the names of all the Japanese cities in the CITY table. The COUNTRYCODE for Japan is JPN.
*/
SELECT name FROM city WHERE countrycode = "JPN"


/*
Weather Observation Station 1
-
Query a list of CITY and STATE from the STATION table.
*/
SELECT city, state FROM station


/*
Weather Observation Station 3
-
Query a list of CITY names from STATION with even ID numbers only. 
You may print the results in any order, but must exclude duplicates from your answer.
*/
SELECT DISTINCT city FROM station WHERE id % 2 = 0 


/*
Weather Observation Station 4
-
Let N be the number of CITY entries in STATION, and let N1  be the number of distinct CITY names in STATION; 
query the value of N-N1 from STATION. In other words, find the difference between the total number of CITY entries 
in the table and the number of distinct CITY entries in the table.
*/
SELECT COUNT(city) - COUNT(DISTINCT city) FROM station


/*
Weather Observation Station 5
-
Query the two cities in STATION with the shortest and longest CITY names, 
as well as their respective lengths (i.e.: number of characters in the name). 
If there is more than one smallest or largest city, choose the one that comes first when ordered alphabetically.
*/
SELECT city, LENGTH(city) 
FROM station 
ORDER BY LENGTH(city) 
LIMIT 1;

SELECT city, LENGTH(city) 
FROM station 
ORDER BY LENGTH(city) DESC 
LIMIT 1;


/*
Weather Observation Station 6
-
Query the list of CITY names starting with vowels (i.e., a, e, i, o, or u) from STATION. Your result cannot contain duplicates.
*/
SELECT DISTINCT city 
FROM station
WHERE SUBSTRING(city, 1 , 1) = 'a'
    OR SUBSTRING(city, 1 , 1) = 'e' 
    OR SUBSTRING(city, 1 , 1) = 'i' 
    OR SUBSTRING(city, 1 , 1) = 'o' 
    OR SUBSTRING(city, 1 , 1) = 'u'; 
























