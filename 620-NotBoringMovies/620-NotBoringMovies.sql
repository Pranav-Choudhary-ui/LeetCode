-- Last updated: 21/07/2026, 09:06:15
# Write your MySQL query statement below
SELECT *
FROM Cinema
WHERE (id%2 != 0) AND description != "boring"
ORDER BY rating DESC;