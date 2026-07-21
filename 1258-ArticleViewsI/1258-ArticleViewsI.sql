-- Last updated: 21/07/2026, 09:05:38
SELECT DISTINCT 
    author_id AS id 
FROM 
    Views 
WHERE 
    author_id = viewer_id
ORDER BY
    author_id ASC;