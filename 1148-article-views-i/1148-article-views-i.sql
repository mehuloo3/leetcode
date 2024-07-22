# Write your MySQL query statement below
# SELECT DISTINCT author_id AS id 
# FROM Views 
# WHERE author_id=viewer_id
# order by id;

SELECT DISTINCT author_id AS id 
FROM Views 
WHERE author_id=viewer_id
group by author_id,viewer_id
order by id ASC;