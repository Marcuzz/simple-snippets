/* 
 * Solution for https://www.hackerrank.com/challenges/botcleanlarge
 * Scores 54.00 pts
 */
process.stdin.resume();
process.stdin.setEncoding("ascii");
process.stdin.on("data", function (input) {
  const lines = input.split('\n')
  const [botY, botX] = lines[0].split(' ')
  const [dimY, dimX] = lines[1].split(' ')
  const grid = []
  for (let i = 2; i <= lines.length+1; ++i) {
    grid.push(lines[i])
  }
  nextMove([Number(dimY), Number(dimX)], [Number(botY), Number(botX)], grid)
});


function nextMove (dimSize, bLoc, grid) {
  const [dimY, dimX] = dimSize
  const [botY, botX] = bLoc

  // clean if we're on trash already
  if (grid[botY][botX] === 'd') {
    console.log('CLEAN')
  }

  // find trash
  const distanceSquared = (a, b) => {
    let sum = 0
    for (let n = 0; n < a.length; n++) {
      sum += Math.pow(a[n] - b[n], 2)
    }
    return Math.sqrt(sum)
  }

  const trashLocations = []
  for (let r = 0; r < dimY; r++) {
    const row = grid[r]

    for (let c = 0; c < dimX; c++) {
      const col = row[c]

      if (col === 'd') {
        trashLocations.push([r, c, distanceSquared([botY, botX], [r, c])])
      }
    }
  }

  // no trash - we're done
  if (!trashLocations.length) {
    return
  }

  // sort trash by closest distanceSquared
  trashLocations.sort(function (a, b) {
    return a[2] - b[2]
  })

  // move to the closest trash
  let [trashY, trashX] = trashLocations[0]

  if (botY !== trashY) {
    console.log(botY > trashY ? 'UP' : 'DOWN')
    return
  }

  if (botX !== trashX) {
    console.log(botX > trashX ? 'LEFT' : 'RIGHT')
  }
}
