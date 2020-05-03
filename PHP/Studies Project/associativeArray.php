<?php

$checkingAccount = [
    '123.456.789-10' => [
        'titular' => 'Matheus',
        'saldo' => 10000
    ],
    '123.456.689-11' => array(
            'titular' => 'Carlos',
        'saldo' => 300
    ),
    '123.256.789-12' => [
        'titular' => 'David',
        'saldo' => 100
    ]
];






foreach ($checkingAccount as $cpf => $account) {
    echo $cpf . " " . $account['titular'] . PHP_EOL;
}

foreach ($checkingAccount as $account) {
    echo $account['titular'] . PHP_EOL;
}