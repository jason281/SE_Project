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
CREATE TABLE record(
ID int NOT NULL UNIQUE,
applier_ID char(255) NOT NULL,
r_type int,
start_date DATE,
start_time TIME,
end_date DATE,
end_time TIME,
reason text,
ps text,
applied_date DATE,
applied_time TIME,
r_status int
);