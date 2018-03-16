    if (runTime.writeTime())
    {
        volVectorField gradC(fvc::grad(C));

        volScalarField gradux
        (
            IOobject
            (
                "gradCx",
                runTime.timeName(),
                mesh,
                IOobject::NO_READ,
                IOobject::AUTO_WRITE
            ),
            gradC.component(vector::X)
        );

        volScalarField gradCy
        (
            IOobject
            (
                "gradCy",
                runTime.timeName(),
                mesh,
                IOobject::NO_READ,
                IOobject::AUTO_WRITE
            ),
            gradC.component(vector::Y)
        );

        volScalarField gradCz
        (
            IOobject
            (
                "gradCz",
                runTime.timeName(),
                mesh,
                IOobject::NO_READ,
                IOobject::AUTO_WRITE
            ),
            gradC.component(vector::Z)
        );


        runTime.write();
    }
