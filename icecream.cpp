// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include "icecream.h"

#include <iostream>

Icecream::Icecream(const std::string &flavor)
    : QObject(NULL), m_flavor(flavor) {}

Icecream::~Icecream() = default;

std::string Icecream::getFlavor() const
{
    return m_flavor;
}

Icecream *Icecream::clone()
{
    // This is ugly, I know. Just had to get around compile issue
    // Is this possibly my problem?
    return this; //new Icecream(*this);
}

std::ostream &operator<<(std::ostream &str, const Icecream &i)
{
    str << i.getFlavor();
    return str;
}
