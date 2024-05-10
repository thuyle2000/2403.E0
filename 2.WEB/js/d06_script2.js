//ham alert(): xuat hop thoai thong bao, voi 1 nut <OK>
alert("How are you ?");


//ham prompt(): xuat 1 hop thoai va cho phep nhap du lieu tren hop thoai nay.
var yob = prompt("enter your expression :", "10*3+50-24");
var kq = `${yob}= ${eval(yob)}`;
// console.log(`ket qua phep tinh ${yob}= ${eval(yob)}`);
console.log(kq);
document.getElementById("kq").innerHTML = kq;


//ham confirm(): xuat hop thoai thong bao, cung voi 2 nut <OK> (true) va <Cancel> (false)
var ans= confirm("close your window ?");
console.log(ans);
if(ans==true){
    window.close();
}