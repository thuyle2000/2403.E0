// ham xu ly su kien bam nut <submit> cua form login
function kiemTraDN(){
    //lay du lieu nhap trong o username
    var tenTK = document.getElementById("uid").value;

    //lay du lieu nhap trong o password
    var matMa = document.getElementById("pwd").value;

    if(tenTK == "aptech" && matMa == 123){
        alert("Congratulation !");
        return true;
    }
    else{
        alert("Invalid username or password. Pls retry !");
        return false;
    }
}