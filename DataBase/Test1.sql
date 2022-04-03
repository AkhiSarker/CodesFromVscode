CREATE DATABASE myData;
USE myData;

CREATE TABLE MyProfile(
	id INT NOT NULL ,
    name VARCHAR(255) NOT NULL,
    PRIMARY KEY (id)
);

CREATE TABLE StudyInfo(
	id INT NOT NULL ,
    sub_name VARCHAR(255) NOT NULL,
    PRIMARY KEY (id)
);

INSERT INTO MyProfile
VALUES (1, 'Sarker');

SELECT * FROM MyProfile;

INSERT INTO MyProfile
VALUES (2, 'Pritom');

SELECT * FROM MyProfile;

INSERT INTO StudyInfo 
VALUES (1, 'Physics'), (2, 'Math');

SELECT * FROM StudyInfo;