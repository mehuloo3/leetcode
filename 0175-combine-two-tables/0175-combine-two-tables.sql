# Write your MySQL query statement below
select Person.firstname,Person.lastName,Address.city,Address.state
from Person LEFT JOIN Address ON Person.personId=Address.personId
