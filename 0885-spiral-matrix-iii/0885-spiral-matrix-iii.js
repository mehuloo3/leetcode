/**
 * @param {number} rows
 * @param {number} cols
 * @param {number} rStart
 * @param {number} cStart
 * @return {number[][]}
 */
var spiralMatrixIII = function(rows, cols, rStart, cStart) {
     let length = rows * cols
    let matrix = []

    // 0: right, 1: down, 2: left, 3: up    
    let direction = 0

    let step = 1
    let count = 0

    while (matrix.length < length) {
        for (let j = 0; j < step; j++) {
            if (rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols) {
                matrix.push([rStart, cStart])
            }

            switch (direction) {
                case 0: cStart++; break
                case 1: rStart++; break
                case 2: cStart--; break
                case 3: rStart--; break
            }
        }


        direction = (direction + 1) % 4 // Change direction
        count++

        if (count % 2 === 0) step++ // Increase step size every two directions
    }

    return matrix
};