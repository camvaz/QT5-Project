CREATE TABLE IF NOT EXISTS `sys`.`Inventario` (
  `idInventario` INT NOT NULL,
  `Inventariocol` VARCHAR(45) NULL,
  PRIMARY KEY (`idInventario`))
ENGINE = InnoDB

insert into `sys`.`Inventario` values(1, "tienda1");
insert into `sys`.`Inventario` values(2, "tienda2");
insert into `sys`.`Inventario` values(3, "tienda3");

CREATE TABLE IF NOT EXISTS `sys`.`Celular` (
  `idCelular` INT NOT NULL,
  `nombre` VARCHAR(45) NULL,
  `camara` VARCHAR(45) NULL,
  `dimensiones` VARCHAR(45) NULL,
  `Imagen` VARCHAR(45) NULL,
  `memoria` VARCHAR(45) NULL,
  `OS` VARCHAR(45) NULL,
  `pantalla` VARCHAR(45) NULL,
  `peso` VARCHAR(45) NULL,
  `resolucion` VARCHAR(45) NULL,
  `tec` VARCHAR(45) NULL,
  `Inventario_idInventario` INT NOT NULL,
  PRIMARY KEY (`idCelular`),
  INDEX `fk_Celular_Inventario_idx` (`Inventario_idInventario` ASC) VISIBLE,
  CONSTRAINT `fk_Celular_Inventario`
    FOREIGN KEY (`Inventario_idInventario`)
    REFERENCES `mydb`.`Inventario` (`idInventario`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB

CREATE TABLE IF NOT EXISTS `sys`.`Sucursal` (
  `idSucursal` INT NOT NULL,
  `nombre` VARCHAR(45) NULL,
  `ubicacion` VARCHAR(45) NULL,
  `Inventario_idInventario` INT NOT NULL,
  PRIMARY KEY (`idSucursal`),
  INDEX `fk_Sucursal_Inventario1_idx` (`Inventario_idInventario` ASC) VISIBLE,
  CONSTRAINT `fk_Sucursal_Inventario1`
    FOREIGN KEY (`Inventario_idInventario`)
    REFERENCES `mydb`.`Inventario` (`idInventario`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB