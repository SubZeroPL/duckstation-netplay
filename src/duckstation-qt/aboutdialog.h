// SPDX-FileCopyrightText: 2019-2023 Connor McLaughlin <stenzek@gmail.com>
// SPDX-License-Identifier: (GPL-3.0 OR CC-BY-NC-ND-4.0)

#pragma once

#include "ui_aboutdialog.h"
#include <QtWidgets/QDialog>

class AboutDialog final : public QDialog
{
  Q_OBJECT

public:
  explicit AboutDialog(QWidget* parent = nullptr);
  ~AboutDialog();

  static void showThirdPartyNotices(QWidget* parent);

private:
  Ui::AboutDialog m_ui;

};
