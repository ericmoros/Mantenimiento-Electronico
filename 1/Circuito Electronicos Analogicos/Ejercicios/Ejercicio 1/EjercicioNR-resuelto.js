
console.group('resistencias')
var ra1 = 100
console.log('ra1: ' + ra1)
var rb2 = 50
console.log('rb2: ' + rb2)
var rb3 = 50
console.log('rb3: ' + rb3)
var rc4 = 300
console.log('rc4: ' + rc4)
var rc5 = 150
console.log('rc5: ' + rc5)
var rc6 = 300
console.log('rc6: ' + rc6)
console.groupEnd()

console.group('resistenciasEquivalentes')
var reqA = ra1
console.log('reqA: ' + reqA)
var reqB = 1 / (1 / rb2 + 1 / rb3)
console.log('reqB: ' + reqB)
var reqC = 1 / (1 / rc4 + 1 / rc5 + 1 / rc6)
console.log('reqC: ' + reqC)
console.groupEnd()

console.group('totales')
var voltajeTotal = 20
var resistenciaTotal = reqA + reqB + reqC
var intensidadTotal = voltajeTotal / resistenciaTotal
console.log('voltajeTotal: ' + voltajeTotal)
console.log('resistenciaTotal: ' + resistenciaTotal)
console.log('intensidadTotal: ' + intensidadTotal)
console.groupEnd()

console.group('voltiosResistenciasEquivalentes')
var vReqA = reqA * intensidadTotal
console.log('vReqA: ' + vReqA)
var vReqB = reqB * intensidadTotal
console.log('vReqB: ' + vReqB)
var vReqC = reqC * intensidadTotal
console.log('vReqC: ' + vReqC)
console.groupEnd()

console.group('voltiosResistenciasEquivalentes -> voltiosResistencias')
var vReqA_ra1 = vReqA
console.log('vReqA_ra1: ' + vReqA_ra1)
var vReqB_rb2 = vReqB
console.log('vReqB_rb2: ' + vReqB_rb2)
var vReqB_rb3 = vReqB
console.log('vReqB_rb3: ' + vReqB_rb3)
var vReqC_rc4 = vReqC
console.log('vReqC_rc4: ' + vReqC_rc4)
var vReqC_rc5 = vReqC
console.log('vReqC_rc5: ' + vReqC_rc5)
var vReqC_rc6 = vReqC
console.log('vReqC_rc6: ' + vReqC_rc6)
console.groupEnd()