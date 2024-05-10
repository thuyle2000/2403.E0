// ham xu ly su kien bam nut <submit> cua form login
function kiemTraDN() {
    //lay du lieu nhap trong o username
    var tenTK = document.getElementById("uid").value.trim();

    //lay du lieu nhap trong o password
    var matMa = document.getElementById("pwd").value.trim();


    if (tenTK.length == 0) {
        alert("Please enter your account");
        document.getElementById("uid").focus();
        return false;
    }

    if (matMa.length == 0) {
        alert("Please enter your password");
        document.getElementById("pwd").focus();
        return false;
    }

    //khai bao mang (array) dstk chua danh sach cac bo tai khoan hop le 
    let dstk = [
        { id: "aptech", pass: "123" },
        { id: "admin", pass: "admin123" },
        { id: "guest", pass: "nopass" },
        { id: "stranger", pass: "abc" }
    ];


    //su dung vong lap for-of de duyet cac bo du lieu (item) trong mang dstk
    for (const item of dstk) {
        if (item.id == tenTK && item.pass == matMa) {
            alert("Congratulation !");
            return true;
        }
    }

    alert("Invalid username or password. Pls retry !");
    return false;
}