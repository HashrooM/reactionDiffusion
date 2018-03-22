Info<< "Reading field C\n" << endl;

volScalarField C
(
    IOobject
    (
        "C",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);


Info<< "Reading transportProperties\n" << endl;

IOdictionary transportProperties
(
    IOobject
    (
        "transportProperties",
        runTime.constant(),
        mesh,
        IOobject::MUST_READ_IF_MODIFIED,
        IOobject::NO_WRITE
    )
);


Info<< "Reading diffusivity DC\n" << endl;

dimensionedScalar DC
(
    "DC",
    dimArea/dimTime,
    transportProperties
);

Info<< "Reading time constant tau\n" << endl;

dimensionedScalar tau 
(
    "tau",
    dimTime,
    transportProperties
);
