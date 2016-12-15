DROP DATABASE IF EXISTS se_database;
CREATE DATABASE se_database;
USE se_database;
CREATE TABLE employee(
ID char(255) NOT NULL UNIQUE,
Passwd char(255) NOT NULL,
Emp_Position int NOT NULL,
Default_time int NOT NULL,
Emp_Name text,
Gender bool,
branch text
);
INSERT INTO employee
VALUES('A001','00000000',1,3,NULL,NULL,NULL);