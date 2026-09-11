# Write your MySQL query statement below
SELECT a.id
FROM Weather a, Weather b
WHERE a.Temperature > b.temperature
AND DATEDIFF(a.Recorddate, b.Recorddate) = 1
