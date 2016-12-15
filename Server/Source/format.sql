DROP DATABASE IF EXISTS se_database;
CREATE DATABASE se_database;
USE se_database;
CREATE TABLE employee(
ID char(255) NOT NULL UNIQUE,
Emp_Position int NOT NULL,
Emp_Name text,
Gender bool,
branch text
);