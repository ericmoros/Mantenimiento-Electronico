
var ra1 = 10
var rb2 = 50
var rb3 = 50
var rc4 = 100
var rc5 = 50
var rc6 = 100

var reqA = ra1
var reqB = 1 / (1 / rb2 + 1 / rb3)
var reqC = 1 / (1 / rc4 + 1 / rc5 + 1 / rc6)

var voltajeTotal = 120
var resistenciaTotal = reqA + reqB + reqC
var intensidadTotal = voltajeTotal / resistenciaTotal

console.log('voltajeTotal: ' + voltajeTotal)
console.log('resistenciaTotal: ' + resistenciaTotal)
console.log('intensidadTotal: ' + intensidadTotal)