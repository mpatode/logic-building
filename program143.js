function CheckEven(iNo)
{
        if(iNo % 2 == 0)
        {
            console.log("It is Even no.")
        }
        else
        {
            console.log("It is Odd no.")
        }
}

function main()
{
    let iValue = 13;

    CheckEven(iValue);
}

main();