-- Last updated: 21/07/2026, 09:06:18
SELECT
    name, population, area 
FROM 
    World 
WHERE 
    area >= 3000000 OR population >= 25000000;