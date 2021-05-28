let s = `{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009 }, \
{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109 }, \
{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209 }, \
{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309 }, \
{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409 }`

console.log(s.replace(/K\d\d\d/g, x => {
    let row = parseInt( x.substr( 1,1 ))
    let col = parseInt( x.substr( 2,2 ))
    return `K${row+1}${col<9?"0":""}${col+1}`
}))