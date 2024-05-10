// ham xu ly su kien bam nut <submit> cua form login
function kiemTraDN(){
    //lay du lieu nhap trong o username
    var tenTK = document.getElementById("uid").value.trim();

    //lay du lieu nhap trong o password
    var matMa = document.getElementById("pwd").value.trim();


    if(tenTK.length==0){
        alert("Please enter your account");
        document.getElementById("uid").focus();
        return false;
    }

    if(matMa.length==0){
        alert("Please enter your password");
        document.getElementById("pwd").focus();
        return false;
    }




    if(tenTK == "aptech" && matMa == 123){
        alert("Congratulation !");
        return true;
    }
    else{
        alert("Invalid username or password. Pls retry !");
        return false;
    }
}