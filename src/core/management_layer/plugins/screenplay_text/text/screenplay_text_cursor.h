#pragma once

#include <QTextCursor>


namespace BusinessLayer {

/**
 * @brief Класс курсора со вспомогательными функциями
 */
class ScreenplayTextCursor : public QTextCursor
{
public:
    ScreenplayTextCursor();
    ScreenplayTextCursor(const QTextCursor &other);
    explicit ScreenplayTextCursor(QTextDocument* _document);
    ~ScreenplayTextCursor();

    /**
     * @brief Находится ли блок в таблице
     */
    bool inTable() const;

    /**
     * @brief Находится ли блок в первой колонке
     */
    bool inFirstColumn() const;
};

} // namespace Ui