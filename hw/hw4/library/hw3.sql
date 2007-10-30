delete from authors;
delete from books;
delete from libraries;
delete from bindices;
delete from instocks;

drop table authors;
drop table books;
drop table libraries;
drop table bindices;
drop table instocks;

create table authors
(name varchar(50),
citizenship varchar(50),
byear integer,
bplace varchar(50));

create table books(
isbn integer,
title varchar(50),
author varchar(50));

create table libraries (
lname varchar(50),
city varchar(50));

create table bindices(
isbn integer,
subject varchar(50));

create table instocks (
isbn integer,
edition integer,
lname varchar(50),
quantity integer);

insert into instocks values(7,1,'Widener Library',2);
insert into instocks values(7,1,'Cao Library',4);
insert into instocks values(857,1,'Harvard Library',3);
insert into instocks values(857,1,'Moffit Library',3);
insert into instocks values(745,2,'Gustav Library',1);
insert into instocks values(649,1,'Harvard Library',1);
insert into instocks values(649,1,'Doe Library',2);
insert into instocks values(693,1,'Liberty Library',3);
insert into instocks values(649,1,'Evans Library',1);
insert into instocks values(24,1,'Cao Library',2);
insert into instocks values(24,2,'Cao Library',4);
insert into instocks values(24,3,'Cao Library',2);
insert into instocks values(758,1,'Rabin Library',1);
insert into instocks values(758,1,'Cao Library',1);
insert into instocks values(84,2,'Moffit Library',1);
insert into instocks values(84,2,'Liberty Library',2);
insert into instocks values(84,2,'Cao Library',1);
insert into instocks values(84,2,'Gustav Library',4);
insert into instocks values(84,1,'Evans Library',2);
insert into instocks values(785,1,'Harvard Library',2);
insert into instocks values(785,1,'Rabin Library',2);
insert into instocks values(785,1,'Widener Library',1);
insert into instocks values(1,3,'Doe Library',1);
insert into instocks values(1,3,'Cao Library',2);
insert into instocks values(1,2,'Rabin Library',1);
insert into instocks values(57,1,'Gustav Library',1);
insert into instocks values(57,1,'Moffit Library',4);
insert into instocks values(57,1,'Harvard Library',1);
insert into instocks values(57,1,'Cao Library',3);
insert into instocks values(334,1,'Widener Library',2);
insert into instocks values(334,1,'Rabin Library',1);
insert into instocks values(675,1,'Moffit Library',1);
insert into instocks values(675,1,'Harvard Library',1);
insert into instocks values(675,1,'Doe Library',1);
insert into instocks values(675,1,'Liberty Library',1);
insert into instocks values(675,1,'Cao Library',1);
insert into instocks values(587,1,'Gustav Library',4);
insert into instocks values(587,1,'Doe Library',1);
insert into instocks values(848,2,'Evans Library',1);
insert into instocks values(88,1,'Widener Library',2);
insert into instocks values(88,1,'Liberty Library',3);
insert into instocks values(88,1,'Moffit Library',2);
insert into instocks values(455,1,'Gustav Library',1);
insert into instocks values(455,2,'Gustav Library',1);
insert into instocks values(455,3,'Gustav Library',1);
insert into instocks values(455,4,'Gustav Library',1);
insert into instocks values(589,1,'Gustav Library',2);
insert into instocks values(589,1,'Harvard Library',1);
insert into instocks values(522,1,'Cao Library',2);
insert into instocks values(522,2,'Cao Library',2);
insert into instocks values(522,3,'Rabin Library',1);
insert into instocks values(11,1,'Rabin Library',1);
insert into instocks values(58,1,'Evans Library',1);
insert into instocks values(57,1,'Liberty Library',2);
insert into instocks values(68,1,'Gustav Library',1);
insert into instocks values(68,1,'Harvard Library',1);
insert into instocks values(399,1,'Cao Library',2);
insert into instocks values(399,1,'Widener Library',2);
insert into instocks values(399,1,'Doe Library',1);
insert into instocks values(346,2,'Widener Library',5);
insert into instocks values(346,2,'Gustav Library',2);
insert into instocks values(748,1,'Cao Library',2);
insert into instocks values(693,1,'Widener Library',1);
insert into instocks values(693,1,'Gustav Library',1);
insert into instocks values(693,1,'Moffit Library',1);

insert into authors values('Agrawal','India',1948,'Madras');
insert into authors values('Carey','USA',1949,'New York');
insert into authors values('DeWitt','France',1950,'Paris');
insert into authors values('Gray','USA',1940,'New York');
insert into authors values('Kim','Korea',1930,'Pekino');
insert into authors values('Sellis','Greece',1920,'Athens');
insert into authors values('Ullman','USA',1915,'Chicago');
insert into authors values('Wong','USA',1955,'Chicago');
insert into authors values('Bernstein','USA',1970,'Chicago');
insert into authors values('Pelegatti','Italy',1940,'Rome');
insert into authors values('Zaniolo','Italy',1948,'Rome');
insert into authors values('Andersen','Denmark',1954,'Berlin');
insert into authors values('Codd','USA',1967,'California');
insert into authors values('Bayer','Germany',1945,'Berlin');
insert into authors values('Wilson','USA',1954,'Boston');
insert into authors values('Gallaire','France',1934,'L.A.');

insert into libraries values('Widener Library','Boston');
insert into libraries values('Doe Library','Berkeley');
insert into libraries values('Harvard Library','Boston');
insert into libraries values('Gustav Library','Rome');
insert into libraries values('Moffit Library','New York');
insert into libraries values('Evans Library','San Francisco');
insert into libraries values('Rabin Library','Boston');
insert into libraries values('Cao Library','Berkeley');
insert into libraries values('Liberty Library','New York');

insert into bindices values(7,'Relegion');
insert into bindices values(857,'Statistics');
insert into bindices values(857,'Databases');
insert into bindices values(745,'Spatial Search');
insert into bindices values(649,'Office Systems');
insert into bindices values(649,'Information Systems');
insert into bindices values(24,'Security');
insert into bindices values(24,'File Systems');
insert into bindices values(758,'Synchronization');
insert into bindices values(84,'Integrities');
insert into bindices values(659,'Integrities');
insert into bindices values(659,'Databases');
insert into bindices values(785,'Logic');
insert into bindices values(778,'Hashing');
insert into bindices values(778,'Data Structures');
insert into bindices values(1,'Time Databases');
insert into bindices values(457,'Decomposition');
insert into bindices values(457,'Data Structures');
insert into bindices values(57,'Query Processing');
insert into bindices values(57,'Sports');
insert into bindices values(334,'Query Processing');
insert into bindices values(334,'Sports');
insert into bindices values(675,'Ullman');
insert into bindices values(37,'Databases');
insert into bindices values(587,'Relegion');
insert into bindices values(587,'Logic');
insert into bindices values(848,'Query Processing');
insert into bindices values(478,'Concurrency Control');
insert into bindices values(478,'Recovery');
insert into bindices values(88,'Semijoins');
insert into bindices values(455,'Italy');
insert into bindices values(455,'Crime');
insert into bindices values(33,'Italy');
insert into bindices values(589,'Italy');
insert into bindices values(589,'Rome');
insert into bindices values(11,'Databases');
insert into bindices values(11,'India');
insert into bindices values(11,'Logic');
insert into bindices values(11,'Query Processing');
insert into bindices values(11,'Sports');
insert into bindices values(11,'Synchronization');
insert into bindices values(11,'Time Databases');
insert into bindices values(522,'India');
insert into bindices values(488,'Database Languages');
insert into bindices values(58,'Databases');
insert into bindices values(58,'Relational Model');
insert into bindices values(994,'Data Structures');
insert into bindices values(68,'Germany');
insert into bindices values(558,'Databases');
insert into bindices values(558,'AI');
insert into bindices values(399,'Wilson');
insert into bindices values(399,'Education');
insert into bindices values(346,'Logic');
insert into bindices values(346,'Databases');
insert into bindices values(748,'Sports');
insert into bindices values(748,'Synchronization');
insert into bindices values(748,'Italy');
insert into bindices values(693,'Relational Model');
 
insert into books values(346,'Equivalence of Relational Expressions','Pelegatti');
insert into books values(748,'Partial Match Retrieval','Bayer');
insert into books values(693,'Data Structure Diagrams','Agrawal');
insert into books values(857,'Summary Tables','Carey');
insert into books values(745,'Spatial Search in Databases','Carey');
insert into books values(649,'Office Information Systems','Carey');
insert into books values(24,'Signature Files','DeWitt');
insert into books values(758,'Fast Hardware Synchronization','DeWitt');
insert into books values(84,'Intergrity Checking','Gray');
insert into books values(659,'Database Temporal Constraints','Gray');
insert into books values(785,'The Logical Data Model','Gray');
insert into books values(778,'External Perfect Hashing','Gray');
insert into books values(1,'A Taxonomy of Time in Databases','Kim');
insert into books values(457,'A Decomposition Storage Model','Kim');
insert into books values(57,'One Query at a Time','Sellis');
insert into books values(334,'Multikey Retrieval','Sellis');
insert into books values(675,'Computers and I','Ullman');
insert into books values(37,'A Semantic Information System','Ullman');
insert into books values(587,'Genesis: A Distributed Database','Ullman');
insert into books values(848,'DECOMP: The INGRES Query Optimization','Wong');
insert into books values(478,'Concurrency Control and Recovery','Bernstein');
insert into books values(88,'The Theory of Semijoins','Bernstein');
insert into books values(455,'Mafia in Italy','Pelegatti');
insert into books values(33,'Italian History','Zaniolo');
insert into books values(589,'Italy in the Past','Zaniolo');
insert into books values(11,'GEM: Yet Another Data Model','Zaniolo');
insert into books values(522,'A Passage to India','Andersen');
insert into books values(488,'QUEL as a Data Type','Andersen');
insert into books values(58,'Advantages of the Relational Model','Codd');
insert into books values(994,'C-Trees: The Ultimate Data Structure','Bayer');
insert into books values(68,'Octoberfest','Bayer');
insert into books values(558,'Databases and AI','Wilson');
insert into books values(399,'Why I went to Stanford','Wilson');
insert into books values(7,'Live and Let Die','Gallaire');

