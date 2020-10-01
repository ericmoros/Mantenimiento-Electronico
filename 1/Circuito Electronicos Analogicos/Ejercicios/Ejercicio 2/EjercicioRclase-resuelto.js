
console.group('resistencias')
var ra1 = 14 * 10 * 1999
console.log('ra1: ' + ra1)
var rb2 = 2 * ra1
console.log('rb2: ' + rb2)
var rb3 = 3 * ra1
console.log('rb3: ' + rb3)
var rc4 = 4 * ra1
console.log('rc4: ' + rc4)
var rc5 = 5 * ra1
console.log('rc5: ' + rc5)
var rc6 = 6 * ra1
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
var voltajeTotal = 12
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

console.group('voltios/resistencia')
var ira1 = vReqA_ra1 / ra1
console.log('ira1: ' + ira1)
var irb2 = vReqB_rb2 / rb2
console.log('irb2: ' + irb2)
var irb3 = vReqB_rb3 / rb3
console.log('irb3: ' + irb3)
var irc4 = vReqC_rc4 / rc4
console.log('irc4: ' + irc4)
var irc5 = vReqC_rc5 / rc5
console.log('irc5: ' + irc5)
var irc6 = vReqC_rc6 / rc6
console.log('irc6: ' + irc6)
console.groupEnd()

console.group('voltios * intensidad')
var wra1 = vReqA_ra1 * ira1
console.log('wra1: ' + wra1)
var wrb2 = vReqB_rb2 * irb2
console.log('wrb2: ' + wrb2)
var wrb3 = vReqB_rb3 * irb3
console.log('wrb3: ' + wrb3)
var wrc4 = vReqC_rc4 * irc4
console.log('wrc4: ' + wrc4)
var wrc5 = vReqC_rc5 * irc5
console.log('wrc5: ' + wrc5)
var wrc6 = vReqC_rc6 * irc6
console.log('wrc6: ' + wrc6)
console.groupEnd()