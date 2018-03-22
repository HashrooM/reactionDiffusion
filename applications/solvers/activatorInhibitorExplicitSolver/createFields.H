volScalarField A
(
    IOobject
    (
        "A",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

volScalarField B
(
    IOobject
    (
        "B",
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

Info<< "Reading diffusivity DA\n" << endl;

dimensionedScalar DA
(
    "DA",
    dimArea/dimTime,
    transportProperties
);

Info<< "Reading diffusivity DB\n" << endl;

dimensionedScalar DB
(
    "DB",
    dimArea/dimTime,
    transportProperties
);

// x is only for units
dimensionedScalar x
(
    "x",
    dimTime,
    transportProperties
);

// y is only for units
dimensionedScalar y
(
    "y",
    dimTime,
    scalar(1.0)
);

dimensionedScalar alpha
(
    "alpha",
    dimensionSet(0,0,0,0,0,0,0),
    transportProperties
);

dimensionedScalar gamma
(
    "gamma",
    dimensionSet(0,0,0,0,0,0,0),
    transportProperties
);

